document.addEventListener('DOMContentLoaded', function() {
    const carGrid = document.getElementById('car-grid');

    const cars = [
        {
            name: 'Gran Max',
            image: 'gambar/pickup1.jpg',
            price: 'Rp 450.000/hari',
            link: 'mobil1.html'
        },
        {
            name: 'Suzuki Carry',
            image: 'gambar/pickup2.jpg',
            price: 'Rp 500.000/hari',
            link: 'detail.html'
        },
        {
            name: 'Honda CR-V',
            image: 'gambar/honda1.jpg',
            price: 'Rp 3.800.000/hari',
            link: 'detail.html'
        },
        {
            name: 'Nissan X-Trail',
            image: 'gambar/nissan1.jpg',
            price: 'Rp 4.200.000/hari',
            link: 'detail.html'
        }
    ];

    cars.forEach(car => {
        const carCard = document.createElement('div');
        carCard.classList.add('car-card');

        carCard.innerHTML = `
            <div class="car-image-container">
                <img src="${car.image}" alt="${car.name}" class="car-image">
            </div>
            <h3 class="car-title">${car.name}</h3>
            <p class="car-price">${car.price}</p>
            <a href="${car.link}" class="rent-btn">Detail</a>
        `;

        carGrid.appendChild(carCard);
    });
});
