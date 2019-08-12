#pragma once

namespace controller{
    /**
     * @brief 
     * 
     * @tparam T 
     * @tparam Size 
     */
    template<typename T, unsigned int Size>
    struct controller_array{

        /**
         * @brief Construct a new controller array object
         * 
         * @tparam _T 
         * @param    args                
         */
        template<class... _T>
        controller_array(_T... args)
            : controllers{args...}
        {
            static_assert(!(Size > sizeof...(args)), "Insufficient argument count for controller array. This array requires `Size` arguments.");
            static_assert(!(Size < sizeof...(args)), "Too many arguments for controller array. This array requires `Size` arguments.");
        }

        inline T* begin() {
            return &controllers[0];
        }

        inline T* end() { 
            return &controllers[Size]; 
        }

        inline const T* cbegin() const {
            return &controllers[0];
        }

        inline const T* cend() const { 
            return &controllers[Size]; 
        }

        inline void init(){
            for(auto & controller : *this){
                controller.init();
            }
        }

        inline T& operator[](unsigned int index){
            return controllers[index];
        }
    private:
        T controllers[Size];
    };
}